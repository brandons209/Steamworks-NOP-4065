#include "ToggledPressedButtonScheduler.h"

ToggledPressedButtonScheduler::ToggledPressedButtonScheduler(bool last, Trigger *button, Command *firstCommand, Command *secondCommand) :
        PressedButtonScheduler(last, button, firstCommand)//parameters for the pressedbuttonscheduler constructor, needs a trigger first command
{
        this->m_otherCommand = secondCommand;//second command for toggle
        this->m_firstOrSecond = false;
}

void ToggledPressedButtonScheduler::Execute()
{
        if (m_button->Grab())
        {
                if (!m_pressedLast)//checks the state of the lastly ran command
                {
                        m_pressedLast = true;

                        if (m_firstOrSecond)//runs the command based on lastly ran command
                                m_otherCommand->Start();
                        else
                                m_command->Start();

                        m_firstOrSecond = !m_firstOrSecond;
                }
        }
        else
        {
                m_pressedLast = false;//resets back to first command
        }
}
