// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UINIBDECODER_H
#define UINIBDECODER_H

@class NSCoder;


#import "UINibStringIDTable.h"

@interface UINibDecoder : NSCoder {
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    *Class classes;
    *id missingClasses;
    *UINibDecoderObjectEntry objects;
    *UINibDecoderValue values;
    char * valueTypes;
    *void valueData;
    NSUInteger valueDataSize;
    UINibDecoderHeader header;
    *id objectsByObjectID;
    *unsigned int longObjectClassIDs;
    char * shortObjectClassIDs;
    *unsigned int keyMasks;
    NSInteger inlinedValueKey;
    UINibDecoderRecursiveState recursiveState;
    UINibStringIDTable *keyIDTable;
    UIKeyToKeyIDCache keyIDCache;
    UIKeyAndScopeToValueCache valueCache;
    NSInteger lookupRounds;
    NSInteger maxPossibleLookupRounds;
    NSInteger failedByKeyMask;
    NSInteger savedByKeyMask;
}


@property id *delegate; // ivar: delegate
@property (readonly, nonatomic, getter=isReusable) BOOL reusable;
@property (readonly, nonatomic) NSInteger uniqueIDForCurrentlyDecodingObject;


+(id)unarchiveObjectWithData:(id)arg0 ;
+(id)unarchiveObjectWithFile:(id)arg0 ;
-(*void)decodeBytesWithReturnedLength:(*NSUInteger)arg0 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeArrayOfCGFloats:(*CGFloat)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(BOOL)decodeArrayOfDoubles:(*CGFloat)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(BOOL)decodeArrayOfFloats:(*float)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(BOOL)validateAndIndexClasses:(*void)arg0 length:(NSUInteger)arg1 ;
-(BOOL)validateAndIndexData:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAndIndexKeys:(*void)arg0 length:(NSUInteger)arg1 ;
-(BOOL)validateAndIndexObjects:(*void)arg0 length:(NSUInteger)arg1 ;
-(BOOL)validateAndIndexValues:(*void)arg0 length:(NSUInteger)arg1 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(NSInteger)versionForClassName:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)decodeDataObject;
-(id)decodeNXObject;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodePropertyList;
-(id)initForReadingWithData:(id)arg0 ;
-(id)initForReadingWithData:(id)arg0 error:(*id)arg1 ;
-(id)nextGenericKey;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(struct CGAffineTransform )decodeCGAffineTransformForKey:(id)arg0 ;
-(struct CGPoint )decodeCGPointForKey:(id)arg0 ;
-(struct CGRect )decodeCGRectForKey:(id)arg0 ;
-(struct CGSize )decodeCGSizeForKey:(id)arg0 ;
-(struct UIEdgeInsets )decodeUIEdgeInsetsForKey:(id)arg0 ;
-(unsigned int)systemVersion;
-(void)dealloc;
-(void)decodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)decodeValuesOfObjCTypes:(char *)arg0 ;
-(void)finishDecoding;
-(void)replaceObject:(id)arg0 withObject:(id)arg1 ;


@end


#endif