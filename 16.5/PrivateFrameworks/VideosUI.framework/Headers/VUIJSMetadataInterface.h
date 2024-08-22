// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIJSMETADATAINTERFACE_H
#define VUIJSMETADATAINTERFACE_H

@protocol VUIJSMetadataInterface;


#import "VUIJSObject.h"

@interface VUIJSMetadataInterface : VUIJSObject <VUIJSMetadataInterface>





+(void)getMediaItemMetadataForCanonicalId:(id)arg0 entityType:(id)arg1 isSportingEvent:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif