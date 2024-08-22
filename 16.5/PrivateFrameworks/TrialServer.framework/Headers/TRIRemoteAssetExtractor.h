// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIREMOTEASSETEXTRACTOR_H
#define TRIREMOTEASSETEXTRACTOR_H

@protocol TRIAssetExtracting, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface TRIRemoteAssetExtractor : NSObject <TRIAssetExtracting>

 {
    NSObject<OS_xpc_object> *_monitoredActivity;
}




-(id)init;
-(id)initWithMonitoredActivity:(id)arg0 ;
-(struct ? )extractArchiveFromFile:(id)arg0 withArchiveName:(id)arg1 toEmptyDirectory:(id)arg2 postExtractionCompression:(struct ? )arg3 error:(*id)arg4 ;


@end


#endif