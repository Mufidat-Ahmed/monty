#include "monty.h"

/**
 * _rotl - rotates the stack to the top.
 * @head: first element in the stack
 * @index: line number
 * Return: nothing
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int index)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}

/**
 * _rotr - rotates the stack to the bottom.
 * @head: first element in the stack
 * @index: line number
 * Return: nothing
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int index)
{
	stack_t *tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	(*head) = tmp;
}
