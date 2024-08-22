// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSSAVEDTIPSMANAGER_H
#define TPSSAVEDTIPSMANAGER_H


#import <Foundation/Foundation.h>


@interface TPSSavedTipsManager : NSObject {
    ? savedTipsMap;
    ? queue;
}




+(id)sharedInstance;
-(id)init;
-(id)savedDateWithCorrelationId:(id)arg0 ;
-(void)removeInvalidEntries;
-(void)updateSavedTipsWithCorrelationId:(id)arg0 savedDate:(id)arg1 lastUsedVersion:(id)arg2 ;


@end


#endif