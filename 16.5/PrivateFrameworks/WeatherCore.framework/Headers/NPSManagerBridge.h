// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPSMANAGERBRIDGE_H
#define NPSMANAGERBRIDGE_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface NPSManagerBridge : NSObject

@property (readonly, nonatomic) NPSManager *npsManager; // ivar: _npsManager


-(id)init;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 container:(id)arg2 appGroupContainer:(id)arg3 ;


@end


#endif