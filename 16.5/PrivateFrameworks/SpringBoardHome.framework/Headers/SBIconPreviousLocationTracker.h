// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONPREVIOUSLOCATIONTRACKER_H
#define SBICONPREVIOUSLOCATIONTRACKER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "SBHIconModel.h"

@interface SBIconPreviousLocationTracker : NSObject {
    NSMapTable *_previousIconLocations;
}


@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel


-(id)previousLocationInfoForIcon:(id)arg0 ;
-(void)captureLocationInfoForIcon:(id)arg0 inModel:(id)arg1 ;


@end


#endif