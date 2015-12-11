/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {
    SKUIArtwork *_artwork;
    unsigned int _artworkRequestID;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIMediaComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadImageWithReason:(int)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)dealloc;
- (int)defaultItemPinningStyle;
- (id)initWithPageComponent:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)setSectionIndex:(int)arg1;
- (void)willAppearInContext:(id)arg1;

@end