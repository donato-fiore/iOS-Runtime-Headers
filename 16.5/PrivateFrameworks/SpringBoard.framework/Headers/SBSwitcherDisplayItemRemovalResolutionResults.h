// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONRESULTS_H
#define SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONRESULTS_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SBSwitcherDisplayItemRemovalResolutionResults : NSObject {
    NSMutableDictionary *_displayItemToActions;
}


@property (readonly, copy, nonatomic) NSArray *displayItems;


-(id)actionsForDisplayItem:(id)arg0 ;
-(void)setActions:(id)arg0 forDisplayItem:(id)arg1 ;


@end


#endif