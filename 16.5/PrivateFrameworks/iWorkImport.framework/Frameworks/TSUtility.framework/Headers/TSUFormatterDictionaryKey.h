// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUFORMATTERDICTIONARYKEY_H
#define TSUFORMATTERDICTIONARYKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUFormatterDictionaryKey : NSObject <NSCopying>

 {
    ? _formatStruct;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTSUFormatFormatStruct:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif