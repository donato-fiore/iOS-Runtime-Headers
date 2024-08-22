// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPHYPERLINKFIELD_H
#define TSWPHYPERLINKFIELD_H

@class NSString, NSURL;


#import "TSWPSmartField.h"
#import "TSWPSelection.h"

@interface TSWPHyperlinkField : TSWPSmartField {
    NSString *_urlString;
    NSString *_urlOriginalString;
}


@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSString *displayTextForChangeTracking; // ivar: _displayTextForChangeTracking
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (readonly, nonatomic) TSWPSelection *highlightSelection;
@property (readonly, nonatomic) NSInteger scheme;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (copy, nonatomic, setter=setURLOriginal:) NSURL *urlOriginal;
@property (readonly, nonatomic) NSString *urlPrefix;


+(BOOL)schemeIsValidForURL:(id)arg0 ;
+(BOOL)schemeIsValidForURLReference:(id)arg0 ;
+(NSInteger)schemeFromURL:(id)arg0 ;
+(id)defaultFieldStyleIdentifier;
+(id)defaultFileURL;
+(id)invalidURLSchemes;
+(id)newURLFromURLReference:(id)arg0 ;
-(BOOL)allowsEditing;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 url:(id)arg1 ;
-(id)initWithContext:(id)arg0 url:(id)arg1 urlOriginal:(id)arg2 ;
-(unsigned short)smartFieldKind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_performHyperlinkSelector:(SEL)arg0 onStorage:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToHyperlinkArchive:(id)arg0 ;
-(void)saveToUnsupportedHyperlinkArchive:(id)arg0 ;
-(void)setUrlOriginalString:(id)arg0 ;
-(void)setUrlString:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 storage:(id)arg1 ;


@end


#endif