// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNTESTRUNNER_H
#define SNTESTRUNNER_H

@class UIApplication, NSString;
@protocol SNTestRunner, SNTestCoordinating;

#import <Foundation/Foundation.h>

#import "SNTestStore.h"

@interface SNTestRunner : NSObject <SNTestRunner>



@property (readonly, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SNTestCoordinating> *testCoordinator; // ivar: _testCoordinator
@property (readonly, nonatomic) SNTestStore *testStore; // ivar: _testStore


-(BOOL)runExtendedLaunchTest;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 fallingBackWith:(id)arg2 ;
-(BOOL)runTestRun:(id)arg0 testName:(id)arg1 options:(id)arg2 fallingBackWith:(id)arg3 ;
-(id)initWithApplication:(id)arg0 testCoordinator:(id)arg1 testStore:(id)arg2 ;


@end


#endif