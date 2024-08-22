// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTSESSIONTOUCHACTION_H
#define _UIEVENTSESSIONTOUCHACTION_H

@class UIEventSessionAction;



@interface _UIEventSessionTouchAction : UIEventSessionAction

@property (nonatomic) NSInteger numFingers; // ivar: _numFingers
@property (nonatomic) NSInteger tapDragState; // ivar: _tapDragState
@property (nonatomic) NSInteger windowSection; // ivar: _windowSection


-(NSInteger)actionType;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)typeEncoding;


@end


#endif