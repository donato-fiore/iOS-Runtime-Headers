// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTSESSIONHOVERACTION_H
#define _UIEVENTSESSIONHOVERACTION_H

@class UIEventSessionAction;



@interface _UIEventSessionHoverAction : UIEventSessionAction

@property (nonatomic) NSInteger numFingers; // ivar: _numFingers
@property (nonatomic) NSInteger tapDragState; // ivar: _tapDragState


-(NSInteger)actionType;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)typeEncoding;


@end


#endif