// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPSHOWMEDIACOLLECTION_H
#define VUIMPSHOWMEDIACOLLECTION_H

@class NSNumber;


#import "VUIMPMediaCollection.h"

@interface VUIMPShowMediaCollection : VUIMPMediaCollection {
    NSNumber *_seasonCount;
}




-(id)initWithMediaLibrary:(id)arg0 mediaItemCollection:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaLibrary:(id)arg0 mediaItemCollection:(id)arg1 requestedProperties:(id)arg2 ;
-(id)seasonCount;


@end


#endif