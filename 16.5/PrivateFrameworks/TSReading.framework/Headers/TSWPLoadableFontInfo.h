// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPLOADABLEFONTINFO_H
#define TSWPLOADABLEFONTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPLoadableFontInfo : NSObject {
    unsigned char _attemptedLoad;
}


@property (nonatomic) *CGFont cgFont; // ivar: _cgFont
@property (copy, nonatomic) NSString *fontFamily; // ivar: _fontFamily
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (copy, nonatomic) NSString *fontPath; // ivar: _fontPath
@property (copy, nonatomic) NSString *groupUID; // ivar: _groupUID
@property (nonatomic) BOOL obfuscated; // ivar: _obfuscated


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif