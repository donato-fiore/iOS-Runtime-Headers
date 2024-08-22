// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPEINFO_H
#define PIPEINFO_H

@class CBScalablePipe;
@protocol OS_dispatch_source, OS_voucher;

#import <Foundation/Foundation.h>

#import "PipeDataTransfer.h"

@interface PipeInfo : NSObject {
    *pthread_override_s _qosOverride;
    *pthread_override_s _socketThreadQOSOverride;
}


@property (retain) PipeDataTransfer *ackData; // ivar: _ackData
@property BOOL connectionInitiator; // ivar: _connectionInitiator
@property unsigned int localSupportedFeatures; // ivar: _localSupportedFeatures
@property unsigned char localVersion; // ivar: _localVersion
@property BOOL newProtocol; // ivar: _newProtocol
@property (retain) CBScalablePipe *pipe; // ivar: _pipe
@property (retain) PipeDataTransfer *pipeDataTransfer; // ivar: _pipeDataTransfer
@property BOOL pipeDidConnectSent; // ivar: _pipeDidConnectSent
@property (retain) NSObject<OS_dispatch_source> *pipeReadSource; // ivar: _pipeReadSource
@property unsigned int supportedFeatures; // ivar: _supportedFeatures
@property BOOL useConnectStatusPDU; // ivar: _useConnectStatusPDU
@property unsigned char version; // ivar: _version
@property BOOL versionInfoReceived; // ivar: _versionInfoReceived
@property BOOL versionInfoSent; // ivar: _versionInfoSent
@property (retain) NSObject<OS_voucher> *voucher; // ivar: _voucher


-(id)description;
-(void)applyQOSOverride;
-(void)dealloc;
-(void)releaseQOSOverride;


@end


#endif