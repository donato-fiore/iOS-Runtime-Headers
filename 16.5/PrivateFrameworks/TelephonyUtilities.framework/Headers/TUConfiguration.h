// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONFIGURATION_H
#define TUCONFIGURATION_H

@class NSURL, NSString;
@protocol TUConfiguration, TUKeyValueDataSource><TUMutableKeyValueDataSource;

#import <Foundation/Foundation.h>

#import "TUDelegateController.h"

@interface TUConfiguration : NSObject <TUConfiguration>



@property (nonatomic) NSUInteger announceCalls;
@property (retain, nonatomic) NSURL *conversationLinkBaseURL;
@property (retain, nonatomic) NSString *conversationLinkBaseURLString;
@property (readonly, nonatomic) NSObject<TUKeyValueDataSource><TUMutableKeyValueDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUDelegateController *delegateController; // ivar: _delegateController
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL simulateFatalPersistentStoreError;
@property (nonatomic) BOOL simulateInternationalCall;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif