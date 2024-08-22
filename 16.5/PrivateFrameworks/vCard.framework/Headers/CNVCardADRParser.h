// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDADRPARSER_H
#define CNVCARDADRPARSER_H


#import <Foundation/Foundation.h>


@interface CNVCardADRParser : NSObject



+(BOOL)parseNextStringWithParser:(id)arg0 components:(id)arg1 key:(id)arg2 ;
+(id)addressValueWithPrimaryAddress:(id)arg0 extendedAddress:(id)arg1 poBox:(id)arg2 ;
+(id)countryCodeForLine:(id)arg0 validCountryCodes:(id)arg1 parser:(id)arg2 ;
+(id)parseStreetAddressComponentsWithParser:(id)arg0 ;
+(id)valueWithParser:(id)arg0 ;
+(void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg0 ;
+(void)processExtensionValuesForLines:(id)arg0 validCountryCodes:(id)arg1 parser:(id)arg2 ;


@end


#endif