// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIREMOTEASSETPATCHER_H
#define TRIREMOTEASSETPATCHER_H

@protocol TRIAssetPatching, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching>

 {
    NSObject<OS_xpc_object> *_monitoredActivity;
}




-(id)_tokenForSandboxExtensionWithClass:(char *)arg0 path:(id)arg1 ;
-(id)init;
-(id)initWithMonitoredActivity:(id)arg0 ;
-(struct ? )applyPatchWithFilename:(id)arg0 toSrcDir:(id)arg1 writingToEmptyDestDir:(id)arg2 postPatchCompression:(struct ? )arg3 error:(*id)arg4 ;


@end


#endif