// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEQUOTEDREFPATHWORD_H
#define TSCEQUOTEDREFPATHWORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCEQuotedRefPathWord : NSObject

@property (nonatomic) BOOL hasPreserveFlag; // ivar: _hasPreserveFlag
@property (retain, nonatomic) NSString *rawString; // ivar: _rawString
@property (nonatomic) BOOL wasQuoted; // ivar: _wasQuoted


-(id)description;
-(id)initWithRawString:(id)arg0 ;
-(id)quoteStringIfNeeded;
-(id)trimmedString;
-(id)trimmedStringWithPreserveFlag:(BOOL)arg0 ;


@end


#endif