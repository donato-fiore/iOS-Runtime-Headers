// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDIAGNOSTICSRESULTITEMTESTPASS_H
#define WFDIAGNOSTICSRESULTITEMTESTPASS_H

@class NSString, NSArray;
@protocol WFDiagnosticsResultItem;

#import <Foundation/Foundation.h>


@interface WFDiagnosticsResultItemTestPass : NSObject <WFDiagnosticsResultItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPassTest; // ivar: _didPassTest
@property (retain, nonatomic) NSArray *failedTests; // ivar: _failedTests
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) NSString *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithResults:(id)arg0 ;


@end


#endif