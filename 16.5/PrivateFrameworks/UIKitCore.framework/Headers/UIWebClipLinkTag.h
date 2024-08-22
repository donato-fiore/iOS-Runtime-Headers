// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBCLIPLINKTAG_H
#define UIWEBCLIPLINKTAG_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface UIWebClipLinkTag : NSObject

@property (copy, nonatomic) NSString *href; // ivar: _href
@property (readonly, nonatomic) NSURL *hrefURL;
@property (nonatomic) BOOL mediaMatchesLandscapeOrientation; // ivar: _mediaMatchesLandscapeOrientation
@property (nonatomic) BOOL mediaMatchesPortraitOrientation; // ivar: _mediaMatchesPortraitOrientation
@property (copy, nonatomic) NSString *rel; // ivar: _rel
@property (copy, nonatomic) NSString *sizes; // ivar: _sizes




@end


#endif