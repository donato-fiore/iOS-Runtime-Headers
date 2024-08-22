// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOVERRIDEINTERFACEORIENTATIONSWITCHERMODIFIER_H
#define SBOVERRIDEINTERFACEORIENTATIONSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBOverrideInterfaceOrientationSwitcherModifier : SBSwitcherModifier {
    NSInteger _orientation;
}




-(NSInteger)switcherInterfaceOrientation;
-(id)initWithInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )containerViewBounds;
-(struct CGRect )switcherViewBounds;


@end


#endif