// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONSTATEBUILDER_H
#define SBHICONSTATEBUILDER_H


#import <Foundation/Foundation.h>


@interface SBHIconStateBuilder : NSObject



+(id)iconStateByReplacingTodayListsInIconState:(id)arg0 withTodayListsFromIconState:(id)arg1 ;
+(id)iconStateFolderWithName:(id)arg0 iconLists:(id)arg1 ;
+(id)iconStateWithIconLists:(id)arg0 ;
+(id)iconStateWithIconLists:(id)arg0 dock:(id)arg1 ;


@end


#endif