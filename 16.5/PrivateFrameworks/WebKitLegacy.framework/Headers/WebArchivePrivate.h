// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBARCHIVEPRIVATE_H
#define WEBARCHIVEPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebArchivePrivate : NSObject {
    RetainPtr<WebResource> cachedMainResource;
    RetainPtr<NSArray> cachedSubresources;
    RetainPtr<NSArray> cachedSubframeArchives;
    RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> coreArchive;
}




+(void)initialize;
-(*void)coreArchive;
-(id)init;
-(id)initWithCoreArchive:(*void)arg0 ;
-(void)dealloc;
-(void)setCoreArchive:(*void)arg0 ;


@end


#endif