// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDIAGNOSTICSMANAGER_H
#define WFDIAGNOSTICSMANAGER_H

@class W5Client, NSArray;

#import <Foundation/Foundation.h>


@interface WFDiagnosticsManager : NSObject

@property (retain, nonatomic) W5Client *client; // ivar: _client
@property (retain, nonatomic) NSArray *customTestRequests; // ivar: _customTestRequests
@property (retain, nonatomic) NSArray *noInternetTestRequests; // ivar: _noInternetTestRequests


-(id)_joinFailureDiagnosticsResultFromW5Results:(id)arg0 ;
-(id)_noInternetDiagnosticsResultFromW5Results:(id)arg0 ;
-(id)init;
-(id)initWithCustomTests:(id)arg0 ;
-(id)joinFailureTestRequestsFor:(id)arg0 ;
// -(void)runCustomDiagnosticsFor:(id)arg0 withUpdate:(id)arg1 result:(unk)arg2  ;
// -(void)runJoinFailureDiagnosticsFor:(id)arg0 withUpdate:(id)arg1 result:(unk)arg2  ;
// -(void)runNoInternetDiagnosticsFor:(id)arg0 withUpdate:(id)arg1 result:(unk)arg2  ;


@end


#endif