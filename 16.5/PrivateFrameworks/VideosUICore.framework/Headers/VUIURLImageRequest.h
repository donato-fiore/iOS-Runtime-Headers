// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIURLIMAGEREQUEST_H
#define VUIURLIMAGEREQUEST_H

@class NSDictionary, NSString, NSURL;
@protocol VUIImageDecrypter;

#import <Foundation/Foundation.h>


@interface VUIURLImageRequest : NSObject

@property (retain, nonatomic) NSObject<VUIImageDecrypter> *decrypter; // ivar: _decrypter
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 headers:(id)arg1 decrypter:(id)arg2 ;
-(id)initWithURL:(id)arg0 headers:(id)arg1 identifier:(id)arg2 decrypter:(id)arg3 ;


@end


#endif