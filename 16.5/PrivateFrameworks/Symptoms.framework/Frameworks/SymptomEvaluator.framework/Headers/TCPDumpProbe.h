// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCPDUMPPROBE_H
#define TCPDUMPPROBE_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_source;


#import "NetDiagnosticProbe.h"

@interface TCPDumpProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}


@property (retain, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property CGFloat duration; // ivar: _duration
@property (nonatomic) id *tcpDumpCompletedBlock; // ivar: _tcpDumpCompletedBlock
@property (retain, nonatomic) NSObject<OS_dispatch_source> *tcpDumpTimer; // ivar: _tcpDumpTimer


-(BOOL)startNetDiagnosticsTask:(id)arg0 ;
-(BOOL)stopNetDiagnosticsTask:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)probeOutputFilePaths;
// -(void)startTCPDumpWithDuration:(CGFloat)arg0 destinationPath:(id)arg1 tcpDumpStarted:(id)arg2 tcpDumpCompleted:(unk)arg3  ;
-(void)stopTest;


@end


#endif