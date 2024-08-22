// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARTAPACTION_H
#define UISTATUSBARTAPACTION_H

@class BSAction;



@interface UIStatusBarTapAction : BSAction

@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) CGFloat xPosition;


-(NSInteger)UIActionType;
-(id)initWithType:(NSInteger)arg0 xPosition:(CGFloat)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif