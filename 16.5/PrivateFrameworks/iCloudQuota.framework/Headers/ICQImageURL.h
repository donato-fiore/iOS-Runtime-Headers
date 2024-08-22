// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQIMAGEURL_H
#define ICQIMAGEURL_H

@class NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQImageURL : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *URL1x; // ivar: _URL1x
@property (retain, nonatomic) NSURL *URL2x; // ivar: _URL2x
@property (retain, nonatomic) NSURL *URL3x; // ivar: _URL3x


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif