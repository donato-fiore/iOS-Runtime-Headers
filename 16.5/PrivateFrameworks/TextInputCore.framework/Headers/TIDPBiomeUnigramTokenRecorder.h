// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIDPBIOMEUNIGRAMTOKENRECORDER_H
#define TIDPBIOMEUNIGRAMTOKENRECORDER_H



#import "TIDPRecorder.h"

@interface TIDPBiomeUnigramTokenRecorder : TIDPRecorder



-(BOOL)report;
-(id)delegate;
-(id)recordingKey;
-(id)records;


@end


#endif