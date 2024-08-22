// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONSTATISTICS_H
#define _LTTRANSLATIONSTATISTICS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _LTTranslationStatistics : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger inputSubtokenCount; // ivar: _inputSubtokenCount
@property (nonatomic) NSInteger inputTokenCount; // ivar: _inputTokenCount


+(BOOL)supportsSecureCoding;
+(NSInteger)_countWithTokenString:(id)arg0 countCharacters:(BOOL)arg1 ;
+(id)statisticsWithEngineMeta:(id)arg0 locale:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif