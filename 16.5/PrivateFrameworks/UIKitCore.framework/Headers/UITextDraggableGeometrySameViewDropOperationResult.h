// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTDRAGGABLEGEOMETRYSAMEVIEWDROPOPERATIONRESULT_H
#define UITEXTDRAGGABLEGEOMETRYSAMEVIEWDROPOPERATIONRESULT_H


#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject

@property (readonly, nonatomic) UITextRange *resultRange; // ivar: _resultRange
@property (readonly, nonatomic) id *targetedPreviewProvider; // ivar: _targetedPreviewProvider


+(id)resultWithRange:(id)arg0 targetedPreviewProvider:(id)arg1 ;
-(id)initWithRange:(id)arg0 targetedPreviewProvider:(id)arg1 ;


@end


#endif