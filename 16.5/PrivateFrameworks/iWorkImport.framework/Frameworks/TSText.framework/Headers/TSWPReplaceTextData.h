// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPREPLACETEXTDATA_H
#define TSWPREPLACETEXTDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TSWPReplaceTextData : NSObject

@property (readonly, copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, copy, nonatomic) NSString *dictationAndAutocorrection; // ivar: _dictationAndAutocorrection
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language


+(id)replaceTextData;
+(id)replaceTextDataWithAttachments:(id)arg0 ;
+(id)replaceTextDataWithDictationAndAutocorrection:(id)arg0 ;
+(id)replaceTextDataWithLanguage:(id)arg0 ;
+(id)replaceTextDataWithLanguage:(id)arg0 dictationAndAutocorrection:(id)arg1 ;
-(id)init;
-(id)initWithAttachments:(id)arg0 ;
-(id)initWithDictationAndAutocorrection:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 dictationAndAutocorrection:(id)arg1 ;
-(id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg0 ;
-(id)replaceTextDataByChangingLanguage:(id)arg0 ;


@end


#endif