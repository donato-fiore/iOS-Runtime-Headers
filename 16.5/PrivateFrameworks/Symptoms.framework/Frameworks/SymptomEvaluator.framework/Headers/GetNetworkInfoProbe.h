// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETNETWORKINFOPROBE_H
#define GETNETWORKINFOPROBE_H

@class NSMutableArray;


#import "NetDiagnosticProbe.h"

@interface GetNetworkInfoProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}


@property (nonatomic) id *completionBlock; // ivar: _completionBlock


-(BOOL)startNetDiagnosticsTask:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)probeOutputFilePaths;
-(void)dealloc;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg0 toStatus:(int)arg1 ;
-(void)stopTest;


@end


#endif