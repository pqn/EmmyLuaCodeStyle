#pragma once

enum class LuaAstNodeType
{
	Chunk,

	Block,

	Identify,

	KeyWord,

	EmptyStatement,

	LocalStatement,

	LocalFunctionStatement,

	IfStatement,

	WhileStatement,

	DoStatement,

	ForStatement,

	RepeatStatement,

	FunctionStatement,

	LabelStatement,

	BreakStatement,

	ReturnStatement,

	GotoStatement,

	ExpressionStatement,

	AssignStatement,

	Expression,
	LiteralExpression,
	ClosureExpression,
	UnaryExpression,
	BinaryExpression,
	TableExpression,
	CallExpression,
	IndexExpression,
	NameExpression,

	UnaryOperator,

	BinaryOperator,

	IndexOperator,

	GeneralOperator,

	TableField,

	FunctionBody,

	ParamList,

	NameDefList,

	Attribute,

	Param,

	CallArgList,

	ExpressionList,

	ForNumber,

	ForList,

	ForBody,

	Error,

	ShortComment,

	LongComment,

	ShebangComment
};