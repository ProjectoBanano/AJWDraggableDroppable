//
//  MNKDraggableDroppableDelegate.h
//  MNKDraggableDroppableExample
//
//  Created by Adam Waite on 26/04/2014.
//  Copyright (c) 2014 maneki. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MNKDraggableDroppable;

///--------------------
/// @name MNKDraggableDroppableDelegate
///--------------------

/**
 *  The MNKDraggableView protocol is adopted to customise draggable view behaviour.
 */
@protocol MNKDraggableDroppableDelegate <NSObject>

@optional

/**
 *  Notifies the delegate that a draggable drag gesture was started
 *
 *  @param draggableDroppable: delegating instance
 *  @param gestureRecognizer:  active gesture recogniser on the draggable
 *  @param draggable:          the draggable subject to user touch
 */
- (void)draggableDroppable:(MNKDraggableDroppable *)draggableDroppable draggableGestureDidBegin:(UIPanGestureRecognizer *)gestureRecognizer draggable:(UIView *)draggable;

/**
 *  Notifies the delegate that a draggable drag gesture ended
 *
 *  @param draggableDroppable: delegating instance
 *  @param gestureRecognizer:  active gesture recogniser on the draggable
 *  @param draggable:          the draggable subject to user touch
 */
- (void)draggableDroppable:(MNKDraggableDroppable *)draggableDroppable draggableGestureDidEnd:(UIPanGestureRecognizer *)gestureRecognizer draggable:(UIView *)draggable;

/**
 *  Notifies the delegate that a draggable was dropped into a droppable
 *
 *  @param draggableDroppable: delegating instance
 *  @param draggable:          the view that was dragged
 *  @param droppable:          the view the draggable was dropped into
 *  @param gestureRecognizer:  active gesture recogniser on the draggable
 */
- (void)draggableDroppable:(MNKDraggableDroppable *)draggableDroppable draggable:(UIView *)draggable didDropIntoDroppable:(UIView *)droppable gesture:(UIPanGestureRecognizer *)gestureRecognizer;

@end