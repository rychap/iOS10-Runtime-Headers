/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellStateForLayout : NSObject {
    TSTCell *mCell;
    id mCellContents;
    BOOL mCellPropsRowHeight;
    BOOL mCellWraps;
    BOOL mForDrawing;
    BOOL mInDynamicLayout;
    TSTLayoutContentCachedKey *mKeyVal;
    int mLayoutCacheFlags;
    struct CGSize { 
        float width; 
        float height; 
    } mMaxSize;
    float mMaxWidthForChildren;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mMergedRange;
    struct CGSize { 
        float width; 
        float height; 
    } mMinSize;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mModelCellID;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } mPaddingInsets;
    unsigned int mPageCount;
    unsigned int mPageNumber;
    int mVerticalAlignment;
    TSWPColumn *mWPColumn;
}

@property (nonatomic, copy) TSTCell *cell;
@property (nonatomic, retain) id cellContents;
@property (nonatomic) BOOL cellPropsRowHeight;
@property (nonatomic) BOOL cellWraps;
@property (nonatomic) BOOL forDrawing;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic) BOOL inDynamicLayout;
@property (nonatomic, retain) TSTLayoutContentCachedKey *keyVal;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic) struct CGSize { float x1; float x2; } maxSize;
@property (nonatomic) float maxWidthForChildren;
@property (nonatomic) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } mergedRange;
@property (nonatomic) struct CGSize { float x1; float x2; } minSize;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } modelCellID;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paddingInsets;
@property (nonatomic) unsigned int pageCount;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) int verticalAlignment;
@property (nonatomic, retain) TSWPColumn *wpColumn;

- (id)cell;
- (id)cellContents;
- (BOOL)cellPropsRowHeight;
- (BOOL)cellWraps;
- (void)dealloc;
- (BOOL)forDrawing;
- (BOOL)hasContent;
- (BOOL)inDynamicLayout;
- (id)init;
- (id)keyVal;
- (int)layoutCacheFlags;
- (struct CGSize { float x1; float x2; })maxSize;
- (float)maxWidthForChildren;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRange;
- (struct CGSize { float x1; float x2; })minSize;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })modelCellID;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingInsets;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (void)setCell:(id)arg1;
- (void)setCellContents:(id)arg1;
- (void)setCellPropsRowHeight:(BOOL)arg1;
- (void)setCellWraps:(BOOL)arg1;
- (void)setForDrawing:(BOOL)arg1;
- (void)setInDynamicLayout:(BOOL)arg1;
- (void)setKeyVal:(id)arg1;
- (void)setLayoutCacheFlags:(int)arg1;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMaxWidthForChildren:(float)arg1;
- (void)setMergedRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setMinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setModelCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setPaddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPageCount:(unsigned int)arg1;
- (void)setPageNumber:(unsigned int)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setWpColumn:(id)arg1;
- (int)verticalAlignment;
- (id)wpColumn;

@end