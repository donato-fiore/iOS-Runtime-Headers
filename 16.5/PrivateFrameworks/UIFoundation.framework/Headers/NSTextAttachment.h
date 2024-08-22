// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTATTACHMENT_H
#define NSTEXTATTACHMENT_H

@class NSData, UTType, NSString, NSFileWrapper, UIImage, NSTextAttachmentView, UIView;
@protocol NSTextAttachmentLayout, NSTextAttachmentContainer, NSSecureCoding, NSTextAttachmentCell;

#import <Foundation/Foundation.h>


@interface NSTextAttachment : NSObject <NSTextAttachmentLayout, NSTextAttachmentContainer, NSSecureCoding>

 {
    NSData *_data;
    UTType *_uti;
    NSString *_cacheKey;
    CGRect _bounds;
    CGFloat _layoutPadding;
    ? _taFlags;
    NSFileWrapper *_fileWrapperForContents;
    UIImage *_image;
    NSTextAttachmentView *_wrapperView;
    id<NSTextAttachmentCell> *_attachmentCell;
}


@property (readonly) BOOL _hasTextAttachmentViewCell;
@property BOOL allowsTextAttachmentView;
@property (nonatomic) CGRect bounds;
@property (retain) UIView *contentView;
@property (copy, nonatomic) NSData *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSFileWrapper *fileWrapper;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property CGFloat lineLayoutPadding;
@property (readonly) Class superclass;
@property (readonly) BOOL usesTextAttachmentView;


+(BOOL)supportsSecureCoding;
+(Class)textAttachmentClassForFileType:(id)arg0 ;
+(Class)textAttachmentViewProviderClassForFileType:(id)arg0 ;
+(void)initialize;
+(void)registerTextAttachmentClass:(Class)arg0 forFileType:(id)arg1 ;
+(void)registerTextAttachmentViewProviderClass:(Class)arg0 forFileType:(id)arg1 ;
-(BOOL)_allocatesTextContainer;
-(BOOL)allowsEditingContents;
-(BOOL)ignoresOrientation;
-(Class)textAttachmentViewProviderClass;
-(NSInteger)_characterIndexForLocation:(id)arg0 textContainer:(id)arg1 ;
-(NSInteger)embeddingType;
-(NSInteger)standaloneAlignment;
-(id)_cacheKey;
-(id)_imageForUTType_iOS:(id)arg0 ;
-(id)accessibilityLabel;
-(id)attachmentCell;
-(id)imageForBounds:(struct CGRect )arg0 attributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 ;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(id)initWithFileWrapper:(id)arg0 ;
-(id)viewProviderForParentView:(id)arg0 characterIndex:(NSUInteger)arg1 layoutManager:(id)arg2 ;
-(id)viewProviderForParentView:(id)arg0 location:(id)arg1 textContainer:(id)arg2 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGRect )drawingBounds;
-(void)_drawInAlignedRect:(struct CGRect )arg0 attributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 applicationFrameworkContext:(NSInteger)arg4 ;
-(void)_invalidateWrapperView;
-(void)_setAllocatesTextContainer:(BOOL)arg0 ;
-(void)_setupAPIPreferences;
-(void)_showAttachmentCell_iOS:(id)arg0 inRect:(struct CGRect )arg1 characterIndex:(NSUInteger)arg2 ;
-(void)_showWithBounds:(struct CGRect )arg0 attributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 applicationFrameworkContext:(NSInteger)arg4 ;
-(void)dealloc;
-(void)detachView:(id)arg0 fromParentView:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)placeView:(id)arg0 withFrame:(struct CGRect )arg1 inParentView:(id)arg2 characterIndex:(NSUInteger)arg3 layoutManager:(id)arg4 ;
-(void)placeView:(id)arg0 withFrame:(struct CGRect )arg1 inParentView:(id)arg2 location:(id)arg3 textContainer:(id)arg4 applicationFrameworkContext:(NSInteger)arg5 ;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setAllowsEditingContents:(BOOL)arg0 ;
-(void)setAttachmentCell:(id)arg0 ;
-(void)setDrawingBounds:(struct CGRect )arg0 ;
-(void)setEmbeddingType:(NSInteger)arg0 ;
-(void)setIgnoresOrientation:(BOOL)arg0 ;
-(void)setStandaloneAlignment:(NSInteger)arg0 ;


@end


#endif