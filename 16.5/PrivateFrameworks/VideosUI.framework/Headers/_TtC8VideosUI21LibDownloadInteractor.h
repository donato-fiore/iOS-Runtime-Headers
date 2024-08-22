// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21LIBDOWNLOADINTERACTOR_H
#define _TTC8VIDEOSUI21LIBDOWNLOADINTERACTOR_H


#import <Foundation/Foundation.h>

#import "VUIDownloadButtonViewModel.h"

@interface _TtC8VideosUI21LibDownloadInteractor : NSObject {
    ? _state;
    ? mediaEntity;
    ? downloadStateObservation;
    ? downloadProgressObservation;
}


@property (nonatomic, readonly) VUIDownloadButtonViewModel *downloadButtonViewModel; // ivar: downloadButtonViewModel


-(id)init;
-(void)dealloc;


@end


#endif