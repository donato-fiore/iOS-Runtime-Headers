// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMLLOADER_H
#define CAMLLOADER_H

@class NSString, NSCache;
@protocol CAMLParserDelegate;

#import <Foundation/Foundation.h>


@interface CAMLLoader : NSObject <CAMLParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *resourceCache; // ivar: _resourceCache
@property (readonly) Class superclass;


-(Class)CAMLParser:(id)arg0 didFailToFindClassWithName:(id)arg1 ;
-(id)CAMLParser:(id)arg0 resourceForURL:(id)arg1 ;
-(id)init;
-(id)loadCAMLFile:(id)arg0 ;
-(void)CAMLParser:(id)arg0 didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(void)CAMLParser:(id)arg0 formatErrorString:(char *)arg1 arguments:(char *)arg2 lineNumber:(NSUInteger)arg3 ;
-(void)CAMLParser:(id)arg0 formatWarningString:(char *)arg1 arguments:(char *)arg2 lineNumber:(NSUInteger)arg3 ;


@end


#endif