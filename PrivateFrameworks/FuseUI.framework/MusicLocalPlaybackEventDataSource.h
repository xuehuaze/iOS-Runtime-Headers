/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLocalPlaybackEventDataSource : NSObject <ADBannerViewDelegate, ADBannerViewDelegatePrivate> {
    unsigned int _adIndex;
    ADBannerView *_bannerView;
    <MusicLocalPlaybackEventDelegate> *_delegate;
    BOOL _hasNetworkConditionsToFetchOffers;
    NSMutableArray *_historyMediaItems;
    MPMediaPlaylist *_playbackHistoryPlaylist;
    BOOL _shouldFetchOffers;
    NSMutableSet *_storeIDsToFetchOffers;
    NSMutableDictionary *_storeIDsToOffers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLocalPlaybackEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_adIdentifierForHistoryItem:(id)arg1;
- (id)_bannerViewForMediaItem:(id)arg1;
- (void)_buildAdBannerForMediaItems:(id)arg1;
- (void)_fetchOffersForStoreIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_mediaItemsForHistoryPlaylist:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (BOOL)_shouldFetchOfferForItem:(id)arg1;
- (id)_storeIDForMediaItem:(id)arg1;
- (void)addPlaybackEventForMediaItem:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (id)bannerViewForMediaItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchStoreOffers;
- (id)initWithPlaylist:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)playbackEventCount;
- (void)setDelegate:(id)arg1;
- (id)storeOffersForStoreID:(id)arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end