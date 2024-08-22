// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINONHOSTINGVISIBILITYPROPAGATIONVIEW_H
#define _UINONHOSTINGVISIBILITYPROPAGATIONVIEW_H

@class UIVisibilityPropagationView, NSString;



@interface _UINonHostingVisibilityPropagationView : UIVisibilityPropagationView

@property (readonly, nonatomic) NSString *environmentIdentifier; // ivar: _environmentIdentifier
@property (readonly, nonatomic) int pid; // ivar: _pid


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pid:(int)arg1 environmentIdentifier:(id)arg2 ;


@end


#endif