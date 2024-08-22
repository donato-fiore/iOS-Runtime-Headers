// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETLISTEDITVIEWPINTABLEVIEWCELL_H
#define WGWIDGETLISTEDITVIEWPINTABLEVIEWCELL_H

@class UITableViewCell, UISwitch;


#import "WGWidgetPinningTeachingAnimationView.h"

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {
    WGWidgetPinningTeachingAnimationView *_pinImageView;
}


@property (readonly, nonatomic) UISwitch *pinSwitch; // ivar: _pinSwitch


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif