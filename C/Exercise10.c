/*
题目10：二叉树的层次遍历
描述：给定一棵二叉树，编写一个函数来实现其层次遍历。
*/
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct QueueNode {
    struct TreeNode *node;
    struct QueueNode *next;
};

struct Queue {
    struct QueueNode *front;
    struct QueueNode *rear;
};

struct QueueNode *createQueueNode(struct TreeNode *node) {
    struct QueueNode *newNode = (struct QueueNode *)malloc(sizeof(struct QueueNode));
    newNode->node = node;
    newNode->next = NULL;
    return newNode;
}

struct Queue *createQueue() {
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(struct Queue *queue, struct TreeNode *node) {
    struct QueueNode *newNode = createQueueNode(node);
    if (queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

struct TreeNode *dequeue(struct Queue *queue) {
    if (queue->front == NULL) {
        return NULL;
    }
    struct QueueNode *temp = queue->front;
    struct TreeNode *node = temp->node;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    return node;
}

void levelOrderTraversal(struct TreeNode *root) {
    if (root == NULL) {
        return;
    }
    struct Queue *queue = createQueue();
    enqueue(queue, root);

    while (queue->front != NULL) {
        struct TreeNode *node = dequeue(queue);
        printf("%d ", node->val);

        if (node->left != NULL) {
            enqueue(queue, node->left);
        }
        if (node->right != NULL) {
            enqueue(queue, node->right);
        }
    }
}

int main() {
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    struct TreeNode *node1 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    struct TreeNode *node2 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    struct TreeNode *node3 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    struct TreeNode *node4 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    struct TreeNode *node5 = (struct TreeNode *)malloc(sizeof(struct TreeNode));

    root->val = 1;
    root->left = node1;
    root->right = node2;

    node1->val = 2;
    node1->left = node3;
    node1->right = node4;

    node2->val = 3;
    node2->left = NULL;
    node2->right = node5;

    node3->val = 4;
    node3->left = NULL;
    node3->right = NULL;

    node4->val = 5;
    node4->left = NULL;
    node4->right = NULL;

    node5->val = 6;
    node5->left = NULL;
    node5->right = NULL;

    printf("Level Order Traversal: ");
    levelOrderTraversal(root);
    printf("\n");

    return 0;
}
