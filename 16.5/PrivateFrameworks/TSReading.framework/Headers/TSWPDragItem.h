// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPDRAGITEM_H
#define TSWPDRAGITEM_H

@class UITargetedDragPreview;

#import <Foundation/Foundation.h>


@interface TSWPDragItem : NSObject

@property (readonly, nonatomic) CGRect canvasRect; // ivar: _canvasRect
@property (readonly, retain, nonatomic) UITargetedDragPreview *targetedDragPreview; // ivar: _targetedDragPreview


-(id)initWithDragPreview:(id)arg0 canvasRect:(struct CGRect )arg1 ;
-(id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg0 icc:(id)arg1 canvasView:(id)arg2 boundsRect:(struct CGRect )arg3 ;
-(void)dealloc;


@end


#endif