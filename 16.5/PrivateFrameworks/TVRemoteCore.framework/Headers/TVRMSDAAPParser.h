// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSDAAPPARSER_H
#define TVRMSDAAPPARSER_H


#import <Foundation/Foundation.h>


@interface TVRMSDAAPParser : NSObject



+(id)objectWithData:(id)arg0 ;
+(id)objectWithData:(id)arg0 error:(*id)arg1 ;
+(id)sharedInstance;
+(id)typeForDRCPValueType:(int)arg0 ;
-(id)parseBrowseResults:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseContentCodes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseContentCollectionDict:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseControlPromptCollection:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseControlPromptResponse:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseDACPPropertyResponse:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseGetSpeakersResponse:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseListingCollection:(char *)arg0 length:(unsigned int)arg1 capacity:(int)arg2 sectionHeaders:(*id)arg3 ;
-(id)parseListingHeader:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseListingItem:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseLogin:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseMACAddressListing:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseQueueSectionItems:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseServerInfo:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseUTF8String:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseUnicodeCharacter:(char *)arg0 length:(unsigned int)arg1 ;
-(id)parseXMLContent:(char *)arg0 length:(unsigned int)arg1 ;
-(id)processResponseCode:(unsigned int)arg0 bytes:(char *)arg1 length:(unsigned int)arg2 ;
-(void)enumerateDAAPChunksInBytes:(char *)arg0 length:(unsigned int)arg1 usingBlock:(id)arg2 ;
-(void)setBool:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setDate:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setFloat32:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setSInt16:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setSInt8:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setString:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt16:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt32:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt64:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt8:(char *)arg0 size:(unsigned int)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)unknownChunk:(struct RSDAAPChunk )arg0 ;


@end


#endif