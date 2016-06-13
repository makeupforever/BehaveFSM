#pragma once

#include "Base_Task_Logic.h"
#include "Action_FSM.h"

class C_Action_Task_Logic: public I_Base_Task_Logic
{
public:
	C_Action_Task_Logic();
	virtual ~C_Action_Task_Logic();

	void Init(C_Action_FSM* p_action_fsm);

	void Set_Action_FSM(C_Action_FSM* p_action_fsm);

	_Logic_Return Execute_Logic(I_Param* p_param);

private:
	C_Action_FSM*      m_p_action_fsm;        //当前状态机
	vec_State_List     m_vec_State_List;      //可选状态列表 
	short              m_curr_state_index;    //当前状态id在列表中的索引
};

