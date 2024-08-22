// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYATYPOLOGYURLHANDLE_H
#define TYATYPOLOGYURLHANDLE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TYATypologyURLHandle : NSObject {
    NSInteger _handle;
}


@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) BOOL valid;


-(id)initWithURL:(id)arg0 sandboxExtensionToken:(id)arg1 ;
-(void)dealloc;


@end


#endif