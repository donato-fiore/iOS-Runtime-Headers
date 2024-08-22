// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQDYNAMICUISPECIFICATION_H
#define _ICQDYNAMICUISPECIFICATION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface _ICQDynamicUISpecification : NSObject

@property (readonly, nonatomic) NSString *attributionSuffix; // ivar: _attributionSuffix
@property (readonly, nonatomic) NSURL *pageContentsURL; // ivar: _pageContentsURL
@property (readonly, nonatomic) NSURL *routeURL; // ivar: _routeURL


-(id)initWithRouteURL:(id)arg0 pageContentsURL:(id)arg1 attributionSuffix:(id)arg2 ;


@end


#endif