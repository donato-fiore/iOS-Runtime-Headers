// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRIALMANAGERDATASOURCE_H
#define TITRIALMANAGERDATASOURCE_H

@class NSString;
@protocol TITrialManagerDataSource;

#import <Foundation/Foundation.h>


@interface TITrialManagerDataSource : NSObject <TITrialManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, getter=isUseDDSForABTestingEnabled) BOOL useDDSForABTestingEnabled;




@end


#endif